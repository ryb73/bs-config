open Jest;
open Expect;

test("config", () => {
    Config.get("bs-config")
    |> Js.Json.decodeString
    |> Belt.Option.getExn
    |> expect
    |> toBe("yeaah")
});